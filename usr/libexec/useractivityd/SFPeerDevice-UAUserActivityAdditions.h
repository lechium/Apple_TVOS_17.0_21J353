//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFPeerDevice.h>

@class NSString;

@interface SFPeerDevice (UAUserActivityAdditions)
+ (id)deviceTypeForModelIdentifier:(id)arg1;	// IMP=0x002000000001286e
+ (id)testPeerForModel:(id)arg1;	// IMP=0x0010000000012360
+ (id)peerForSelf;	// IMP=0x00100000000120e3
@property(readonly, retain) NSString *deviceType;
- (id)copy;	// IMP=0x001000000001256e
@end

