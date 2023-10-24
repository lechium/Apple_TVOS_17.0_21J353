//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryReply : NSObject
{
    NSArray *_groups;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)replyWithError:(id)arg1;	// IMP=0x0010000000003936
+ (id)replyWithGroups:(id)arg1;	// IMP=0x00100000000038eb
+ (id)rq_instanceFromCoded:(id)arg1;	// IMP=0x001000000001e0ee
- (void).cxx_destruct;	// IMP=0x0000000000003a71
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy) NSString *description;
- (id)_initWithGroups:(id)arg1 error:(id)arg2;	// IMP=0x0000000000003832
- (id)rq_coded;	// IMP=0x000000000001dfe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

