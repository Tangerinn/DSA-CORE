pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Compiling the BinarySearch and BinarySearchTest files...'
                bat 'javac -cp "junit-4.13.2.jar;hamcrest-core-1.3.jar;." BinarySearch.java BinarySearchTest.java'
            }
        }
        stage('Test') {
            steps {
                echo 'Running automated test cases...'
                bat 'java -cp "junit-4.13.2.jar;hamcrest-core-1.3.jar;." org.junit.runner.JUnitCore BinarySearchTest'
            }
        }
    }
}
