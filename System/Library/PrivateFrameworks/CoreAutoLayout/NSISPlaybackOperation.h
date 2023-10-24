//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperation : NSObject
{
    NSMutableDictionary *oldIdentsToNewVariables;	// 8 = 0x8
    NSMutableArray *variableDelegates;	// 16 = 0x10
}

- (void)_addToEngine:(id)arg1;	// IMP=0x000000000001aea4
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;	// IMP=0x000000000001aaa9
- (void)dealloc;	// IMP=0x000000000001aa5f
- (id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2;	// IMP=0x000000000001a867
- (id)unwrapVariable:(id)arg1;	// IMP=0x000000000001a6da
- (id)init;	// IMP=0x000000000001a683

@end

