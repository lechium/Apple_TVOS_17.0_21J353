//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessageDestination, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDIDSMessageContext : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    HMFMessageDestination *_destination;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000867634
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000008674cc
- (id)init;	// IMP=0x0000000000867424

@end

