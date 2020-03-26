//
// Created by jakecooke on 26/3/20.
//

#ifndef MCTS_NODE_H
#define MCTS_NODE_H
#include <vector>
#include <cstdint>

class Node {
  private:
	std::vector<Node> children_;
	uint32_t visits_;

  public:
	[[nodiscard]] const std::vector<Node> &getChildren() const;
	void setChildren(const std::vector<Node> &children);
	[[nodiscard]] uint32_t getVisits() const;
	void setVisits(uint32_t visits);
};


#endif//MCTS_NODE_H
