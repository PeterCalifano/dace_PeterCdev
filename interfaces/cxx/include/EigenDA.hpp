/**
 * @file EigenDA.hpp
 * @author PeterC (petercalifano.gs@gmail.com)
 * @brief 
 * @version 0.1
 * @date OLD
 */

// C++ stdlib classes required for interface definition
#include <vector>
#include <iostream>

// DACE classes required for interface definition
#include "dace/PromotionTrait.h"
#include <Eigen/Dense>


namespace EigenDA {

    // Define the EigenDA class here
    template<typename T> VectorXd(const T &obj) {
        public:
            // CONSTRUCTOR
            VectorXd(const T &obj)
            {
                // TODO
        }


        public:
            // PUBLIC DATA MEMBERS

        public:
            // PUBLIC METHODS

        public: 
        
        // OPERATOR OVERLOADS
        VectorXd operator+(const VectorXd &other) const;
        VectorXd operator*(const VectorXd &other) const;
        double operator()(int row, int col) const;
        double operator<<(std::ostream &os, const VectorXd &obj);

        private:
            // PRIVATE DATA MEMBERS
            Eigen::VectorXd eigenVector;
            DA::AlgebraicVector daceVector;
    }

}