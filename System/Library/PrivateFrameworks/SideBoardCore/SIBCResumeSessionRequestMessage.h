//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface SIBCResumeSessionRequestMessage : NSObject
{
    NSUUID *_hubIdentifier;	// 8 = 0x8
}

+ (id)responseMessageId;	// IMP=0x00100000000048ee
+ (id)messageId;	// IMP=0x00100000000048da
- (void).cxx_destruct;	// IMP=0x000000000000490c
@property(readonly, nonatomic) NSUUID *hubIdentifier; // @synthesize hubIdentifier=_hubIdentifier;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x00000000000048cc
- (id)dictionaryEncoding;	// IMP=0x00000000000047dc
@property(readonly, copy) NSString *description;
- (id)initWithHubIdentifier:(id)arg1;	// IMP=0x00000000000046e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

