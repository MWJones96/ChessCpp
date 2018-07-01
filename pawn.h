#ifndef PAWN_H
#define PAWN_H

class Pawn : public Piece
{
public:
    Pawn(Color c, int x, int y) : Piece(color, x, y, Type::PAWN, 'P'){}
    ~Pawn(){}
    std::vector<Move> getMoves();
    void move(int x, int y);
};

#endif // PAWN_H
