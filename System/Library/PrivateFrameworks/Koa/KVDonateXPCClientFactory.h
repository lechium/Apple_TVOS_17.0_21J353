//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDonateVersionLog, NSString;

@interface KVDonateXPCClientFactory : NSObject
{
    KVDonateVersionLog *_versionLog;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002ab63
- (id)versionLog;	// IMP=0x000000000002ab55
- (void)terminateConnection:(id)arg1;	// IMP=0x000000000002ab09
- (id)makeConnection:(id)arg1;	// IMP=0x000000000002aabc
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000002aa38
- (id)init;	// IMP=0x000000000002a9f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

