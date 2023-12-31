//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncDevicePeerStatusTracker : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003f772
- (id)allPeers;	// IMP=0x001000000003f75c
- (void)setLocalDeviceIdentifier:(id)arg1;	// IMP=0x001000000003f6a6
- (_Bool)setLastSyncDate:(id)arg1 forDeviceWithIdentifier:(id)arg2;	// IMP=0x001000000003f63f
- (id)lastSyncDateOfDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000003f629
- (id)lastSyncDateFromAnyDevice;	// IMP=0x001000000003f613
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x001000000003f5fd
- (_Bool)upsertSyncDevicePeer:(id)arg1;	// IMP=0x001000000003f5e5
- (id)localDeviceUpdatingIfNeccesaryWithProtocolVersion:(unsigned long long)arg1;	// IMP=0x001000000003f48a
- (id)localDeviceIdentifierCreatingIfNecessary;	// IMP=0x001000000003f34f
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000003f2e4

@end

