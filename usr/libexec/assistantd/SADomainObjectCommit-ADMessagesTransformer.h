//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainObjectCommit.h>

@class NSString;

@interface SADomainObjectCommit (ADMessagesTransformer)
- (id)_ad_replyCommandValue;	// IMP=0x002000000011802f
- (void)_ad_getMessagesRequestValueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117f29
- (_Bool)supportsADSADOCommand;	// IMP=0x00100000002efe25
- (id)expectedResponseClassName;	// IMP=0x00100000002efe11
- (id)domainFromSADObject;	// IMP=0x00100000002efdc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

