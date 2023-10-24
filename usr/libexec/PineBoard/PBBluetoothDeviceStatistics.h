//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBBluetoothDeviceStatistics : NSObject
{
    unsigned long long _remoteCount;	// 8 = 0x8
    unsigned long long _keyboardCount;	// 16 = 0x10
    unsigned long long _audioDeviceCount;	// 24 = 0x18
    unsigned long long _gameControllerCount;	// 32 = 0x20
    unsigned long long _genericDeviceCount;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long genericDeviceCount; // @synthesize genericDeviceCount=_genericDeviceCount;
@property(readonly, nonatomic) unsigned long long gameControllerCount; // @synthesize gameControllerCount=_gameControllerCount;
@property(readonly, nonatomic) unsigned long long audioDeviceCount; // @synthesize audioDeviceCount=_audioDeviceCount;
@property(readonly, nonatomic) unsigned long long keyboardCount; // @synthesize keyboardCount=_keyboardCount;
@property(readonly, nonatomic) unsigned long long remoteCount; // @synthesize remoteCount=_remoteCount;
- (id)description;	// IMP=0x001000000006f5ec
@property(readonly, nonatomic) unsigned long long totalDeviceCount;
- (id)initWithDevices:(id)arg1;	// IMP=0x001000000006f352

@end

