//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPCWhiskyControllerDisabledState : NSObject
{
    long long _reason;	// 8 = 0x8
    NSString *_explanation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014d0c0
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
- (id)initWithPolicyEvaluation:(id)arg1;	// IMP=0x000000000014cfc6

@end
