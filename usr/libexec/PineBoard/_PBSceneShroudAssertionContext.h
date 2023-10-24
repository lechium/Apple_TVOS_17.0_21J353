//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PBSceneShroudAssertionContext : NSObject
{
    long long _style;	// 8 = 0x8
    CDUnknownBlockType _predicate;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

+ (id)contextWithStyle:(long long)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x0040000000129848
- (void).cxx_destruct;	// IMP=0x002000000012994d
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)initWithStyle:(long long)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x00100000001298a1

@end

