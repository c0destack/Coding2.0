package main

import "fmt"

type Linklist struct {
	Data int
	Next *Linklist
}

func create(data int) *Linklist {
	newNode := Linklist{
		Data: data,
		Next: nil,
	}
	return &newNode
}

func (l *Linklist) add(data int) *Linklist {
	newNode := create(data)
	l.Next = newNode
	return newNode
}

func getLength(root *Linklist) int {
	len := 0
	curr := root
	for curr != nil {
		len++
		curr = curr.Next
	}
	return len
}

func main() {
	ans := -1
	// create linklist-1
	root1 := create(2)
	root1.add(4).add(6).add(7).add(8)

	// create linklist-2
	root2 := create(3)
	root2.add(5).add(5).add(6).add(7).add(8)

	// get length of linklist
	len1 := getLength(root1)
	len2 := getLength(root2)

	// converting linklist to equal length
	for len1 != len2 {
		if len1 > len2 {
			root1 = root1.Next
			len1--
		} else {
			root2 = root2.Next
			len2--
		}
	}

	// finding intersecting point
	if len1 > 0 && len2 > 0 {
		for root1 != nil && root2 != nil {
			if root1.Data == root2.Data {
				ans = root1.Data
				break
			}
			root1 = root1.Next
			root2 = root2.Next
		}
	}
	fmt.Printf("intersecting point is: %v\n", ans)
}
