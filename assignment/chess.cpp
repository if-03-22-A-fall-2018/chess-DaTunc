/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 07
 * Title:			chess.cpp
 * Author:		Johannes Tunc
 * Due Date:		November 13th, 2018
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
 #include <stdlib.h>
 #include "general.h"
 #include "chess.h"

 bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type)
 {


   return  pc.color == color&& pc.type == type ;
 }


 void 	init_chess_board (ChessBoard chess_board)
 {
   for (size_t i = 0; i < 8; i++) {
     for (size_t x = 0; x < 8; x++) {
       chess_board[i][x].is_occupied = false;
     }
   }
 }


 struct ChessSquare* 	get_square (ChessBoard chess_board, File file, Rank rank)
 {
   return 0;
 }


 bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank)
 {
   return false;
 }

 bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
 {
   return false;
 }


 struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank)
{
  struct ChessPiece return_value;
  return return_value;
}


 void 	setup_chess_board (ChessBoard chess_board){

 }


 bool 	remove_piece (ChessBoard chess_board, File file, Rank rank)
 {
   return false;
 }

 bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }

 bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }

 bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }

 bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }

 bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }

 bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }

 bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 }
