// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrimeTest, checkPrime1) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(checkPrimeTest, checkPrime2) {
    EXPECT_TRUE(checkPrime(13));
}

TEST(checkPrimeTest, checkPrime3) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(checkPrimeTest, checkPrime4) {
    EXPECT_FALSE(checkPrime(100));
}

TEST(nPrimeTest, nPrime1) {
    uint64_t res = nPrime(1);
    uint64_t expected = 2;
    EXPECT_EQ(expected, res);
}

TEST(nPrimeTest, nPrime2) {
    uint64_t res = nPrime(5);
    uint64_t expected = 11;
    EXPECT_EQ(expected, res);
}

TEST(nPrimeTest, nPrime3) {
    uint64_t res = nPrime(10);
    uint64_t expected = 29;
    EXPECT_EQ(expected, res);
}

TEST(nextPrimeTest, nextPrime1) {
    uint64_t res = nextPrime(10);
    uint64_t expected = 11;
    EXPECT_EQ(expected, res);
}

TEST(nextPrimeTest, nextPrime2) {
    uint64_t res = nextPrime(29);
    uint64_t expected = 31;
    EXPECT_EQ(expected, res);
}

TEST(nextPrimeTest, nextPrime3) {
    uint64_t res = nextPrime(100);
    uint64_t expected = 101;
    EXPECT_EQ(expected, res);
}

TEST(sumPrimeTest, sumPrime1) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(sumPrimeTest, sumPrime2) {
    uint64_t res = sumPrime(20);
    uint64_t expected = 77;
    EXPECT_EQ(expected, res);
}

TEST(sumPrimeTest, sumPrime3) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}
