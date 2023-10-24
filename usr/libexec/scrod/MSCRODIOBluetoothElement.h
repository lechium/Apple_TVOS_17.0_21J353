//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROIOElement.h>

@class NSString;

@interface MSCRODIOBluetoothElement : SCROIOElement
{
    NSString *_bluetoothAddress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000009699
- (id)bluetoothAddress;	// IMP=0x0010000000009684
- (int)transport;	// IMP=0x0010000000009679
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000095e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000009591
@property(readonly) unsigned long long hash;
- (id)initWithAddress:(id)arg1;	// IMP=0x00100000000094b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
