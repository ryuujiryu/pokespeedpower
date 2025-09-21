@ Due to the way mks4agb (Nintendo's tool) works, key split table labels can
@ appear before the actual start of the key split table data. If you look at
@ the first keysplit table (keysplit_piano), you'll notice it's offset backwards
@ by 36 bytes. This is because the key split tables don't map instruments
@ for the entire note range (0-127)--they only map subsets, and the upper
@ and lower ranges aren't necessarily 0 or 127.
@
@ For example if a key split table maps an note range of 10-20, then the key
@ split table label will be offset 10 bytes before the actual key split data
@ begins. Therefore, the notes naturally map to the key split table without
@ any extra offset calculation.

keysplit piano, 36
	split 0, 55
	split 1, 70
	split 2, 91
	split 3, 108

keysplit strings, 36
	split 0, 69
	split 1, 81
	split 2, 108

keysplit trumpet, 36
	split 0, 66
	split 1, 84
	split 2, 108

keysplit tuba, 24
	split 0, 42
	split 1, 108

keysplit french_horn, 36
	split 0, 66
	split 1, 108

.set KeySplitTable_AdvanceWars2, . - 0
	.byte 1 @ 0
	.byte 1 @ 1
	.byte 1 @ 2
	.byte 1 @ 3
	.byte 1 @ 4
	.byte 1 @ 5
	.byte 1 @ 6
	.byte 1 @ 7
	.byte 1 @ 8
	.byte 1 @ 9
	.byte 1 @ 10
	.byte 1 @ 11
	.byte 1 @ 12
	.byte 1 @ 13
	.byte 1 @ 14
	.byte 1 @ 15
	.byte 1 @ 16
	.byte 1 @ 17
	.byte 1 @ 18
	.byte 1 @ 19
	.byte 1 @ 20
	.byte 1 @ 21
	.byte 1 @ 22
	.byte 1 @ 23
	.byte 1 @ 24
	.byte 1 @ 25
	.byte 1 @ 26
	.byte 1 @ 27
	.byte 1 @ 28
	.byte 1 @ 29
	.byte 1 @ 30
	.byte 1 @ 31
	.byte 1 @ 32
	.byte 1 @ 33
	.byte 1 @ 34
	.byte 1 @ 35
	.byte 1 @ 36
	.byte 1 @ 37
	.byte 1 @ 38
	.byte 1 @ 39
	.byte 1 @ 40
	.byte 1 @ 41
	.byte 1 @ 42
	.byte 1 @ 43
	.byte 1 @ 44
	.byte 1 @ 45
	.byte 1 @ 46
	.byte 1 @ 47
	.byte 1 @ 48
	.byte 1 @ 49
	.byte 1 @ 50
	.byte 1 @ 51
	.byte 1 @ 52
	.byte 1 @ 53
	.byte 1 @ 54
	.byte 1 @ 55
	.byte 1 @ 56
	.byte 1 @ 57
	.byte 1 @ 58
	.byte 1 @ 59
	.byte 1 @ 60
	.byte 1 @ 61
	.byte 1 @ 62
	.byte 1 @ 63
	.byte 1 @ 64
	.byte 1 @ 65
	.byte 1 @ 66
	.byte 1 @ 67
	.byte 1 @ 68
	.byte 1 @ 69
	.byte 1 @ 70
	.byte 1 @ 71
	.byte 1 @ 72
	.byte 1 @ 73
	.byte 1 @ 74
	.byte 1 @ 75
	.byte 1 @ 76
	.byte 1 @ 77
	.byte 1 @ 78
	.byte 1 @ 79
	.byte 1 @ 80
	.byte 1 @ 81
	.byte 1 @ 82
	.byte 1 @ 83
	.byte 1 @ 84
	.byte 1 @ 85
	.byte 1 @ 86
	.byte 1 @ 87
	.byte 1 @ 88
	.byte 1 @ 89
	.byte 1 @ 90
	.byte 1 @ 91
	.byte 1 @ 92
	.byte 1 @ 93
	.byte 1 @ 94
	.byte 1 @ 95
	.byte 1 @ 96
