pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build') {
            steps {
                echo 'Building Project...'
                // Компілюємо всі .cpp файли
                sh 'g++ -std=c++14 test.cpp pch.cpp sort.cpp -o test_app -lgtest -lgtest_main -pthread'
            }
        }

        stage('Test') {
            steps {
                echo 'Running Tests...'
                // Запускаємо тест і генеруємо звіт
                sh './test_app --gtest_output="xml:test_report.xml"'
            }
        }
    }

    post {
        always {
            // Публікуємо результати тестів
            junit 'test_report.xml'
        }
    }
}
