//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGroupCompletion : NSObject
{
    NSMutableArray *_completions;	// 8 = 0x8
    unsigned long long _refCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006aaa9d
- (void)_performAllCompletions;	// IMP=0x00000000006aa974
- (void)complete;	// IMP=0x00000000006aa94e
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006aa8be

@end

