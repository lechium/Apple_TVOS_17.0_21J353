//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FARequestCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_coalesceQueue;	// 8 = 0x8
    NSMutableDictionary *_inFlightRequests;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000015b7d
- (void).cxx_destruct;	// IMP=0x00200000000161b0
@property(retain, nonatomic) NSMutableDictionary *inFlightRequests; // @synthesize inFlightRequests=_inFlightRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coalesceQueue; // @synthesize coalesceQueue=_coalesceQueue;
- (id)performBlockForKey:(id)arg1 force:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015c6b
- (id)init;	// IMP=0x0010000000015bd2

@end

