#include <iostream>

int main()
{
    /**
     * not type safe enums
     */
    enum PieceType { PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn };
    enum CustomPieceType { CustomTypeKing = 1, CustomTypeQueen, CustomTypeRook = 10, CustomTypePawn };

    // this should show a compile warning or error
    /*
     * PieceType myPiece;
     * myPiece = 0;
     */

    /**
     * type safe enums
     */
    enum class TSPieceType { PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn };
    TSPieceType piece = TSPieceType::PieceTypeKing;

    // this is illegal
    /*
     * if (MyPiece::PieceTypeKing == 0) {...}
     */

    /**
     * default type of the enumeration is integer
     * change the type of the enumeration
     */
    enum class CTPieceType : unsigned long { PieceTypeKing, PieceTypeQueen = 2UL, PieceTypeRook, PieceTypePawn };

    return 0;
}
