//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, ObjCReplica;

__attribute__((visibility("hidden")))
@interface ObjCTimestamp : NSObject
{
    MISSING_TYPE *timestamp;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000154710
- (id)init;	// IMP=0x0000000000154690
@property(nonatomic, readonly) NSString *description;
- (id)initWithReplica:(id)arg1 counter:(long long)arg2;	// IMP=0x0000000000154480
@property(nonatomic, readonly) long long counter;
@property(nonatomic, readonly) ObjCReplica *replica;

@end

