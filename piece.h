#ifndef PIECE_H
#define PIECE_H

class Piece
{
public:
    int m_x, m_y;
    Color m_c;
    Type m_type;
    char m_letterCode;

    Piece(Color c, int x, int y, Type c, char letterCode);
    virtual ~Piece();
    std::vector<Move> getLegalMoves();
    virtual std::vector<Move> getMoves() override = 0;
    virtual void move(int x, int y) override = 0;
};

#endif // PIECE_H
