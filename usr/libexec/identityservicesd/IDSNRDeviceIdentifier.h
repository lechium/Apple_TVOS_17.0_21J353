//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface IDSNRDeviceIdentifier : NSObject
{
    NSUUID *_nrDeviceIdentifier;	// 8 = 0x8
}

+ (id)newDeviceIdentifierWithBluetoothUUID:(id)arg1;	// IMP=0x0020000000004a99
- (void).cxx_destruct;	// IMP=0x0020000000004aab
@property(readonly, nonatomic) NSUUID *nrDeviceIdentifier; // @synthesize nrDeviceIdentifier=_nrDeviceIdentifier;
- (id)initWithUUID:(id)arg1;	// IMP=0x0010000000004a8b

@end

