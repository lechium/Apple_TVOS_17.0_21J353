//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, UIKBTree, UIKeyboardSliceSet, UIKeyboardTransitionSlice;

__attribute__((visibility("hidden")))
@interface UIKBSplitKeyplaneGenerator : NSObject
{
    NSMutableArray *_rows;	// 8 = 0x8
    NSDictionary *_splitLayoutHints;	// 16 = 0x10
    UIKBTree *_sourceKeyboard;	// 24 = 0x18
    UIKBTree *_sourceKeyplane;	// 32 = 0x20
    struct CGSize _splitKeySizeFactor;	// 40 = 0x28
    struct CGSize _keyboardSize;	// 56 = 0x38
    double _leftSideWidestRow;	// 72 = 0x48
    double _rightSideWidestRow;	// 80 = 0x50
    long long _keyboardType;	// 88 = 0x58
    UIKeyboardSliceSet *_sliceSet;	// 96 = 0x60
    UIKeyboardTransitionSlice *_leftSlice;	// 104 = 0x68
    UIKeyboardTransitionSlice *_rightSlice;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000cb51be
- (id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2;	// IMP=0x0000000000cb4a4f
- (id)finalizeSplitKeyplane;	// IMP=0x0000000000cb3db5
- (void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2;	// IMP=0x0000000000cb3ba4
- (void)organizeKeyplaneIntoRows;	// IMP=0x0000000000cb375f
- (id)hintsForRow:(id)arg1;	// IMP=0x0000000000cb3092
- (void)splitRow:(id)arg1;	// IMP=0x0000000000cb22a4
- (void)alignSpaceKeyEdges;	// IMP=0x0000000000cb169c
- (void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(_Bool)arg5 force:(_Bool)arg6 isDefaultWidth:(_Bool)arg7;	// IMP=0x0000000000cb1052
- (void)commitUncommittedSlices;	// IMP=0x0000000000cb0f38
- (void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(struct CGRect)arg3 right:(struct CGRect)arg4;	// IMP=0x0000000000cb0a9b
- (void)addSliceStart:(struct CGRect)arg1 end:(struct CGRect)arg2 startToken:(id)arg3 endToken:(id)arg4 left:(_Bool)arg5 normalization:(int)arg6 isDefaultWidth:(_Bool)arg7 row:(int)arg8;	// IMP=0x0000000000cb0699
- (id)keysOrderedByPosition;	// IMP=0x0000000000cb0653
- (id)init;	// IMP=0x0000000000cb0554

@end
