//
// Created by jakecooke on 26/3/20.
//

#include "Node.h"
const std::vector<Node> &Node::getChildren() const {
	return children_;
}
void Node::setChildren(const std::vector<Node> &children) {
	children_ = children;
}
uint32_t Node::getVisits() const {
	return visits_;
}
void Node::setVisits(uint32_t visits) {
	visits_ = visits;
}
