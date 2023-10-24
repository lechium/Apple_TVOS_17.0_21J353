//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GTReplayRequestBatch : NSObject
{
    unsigned int _priority;	// 8 = 0x8
    unsigned long long _requestID;	// 16 = 0x10
    NSArray *_requests;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000007720
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (id)initNoRequestID;	// IMP=0x0000000000007678
- (id)init;	// IMP=0x0000000000007619

@end

