//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TURepeatingAction : NSObject
{
    CDUnknownBlockType _action;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    unsigned long long _remainingIterations;	// 24 = 0x18
    double _pauseDuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002774c
@property(nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned long long remainingIterations; // @synthesize remainingIterations=_remainingIterations;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (id)initWithAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027685

@end
