//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _GCHapticClientProxy;
@protocol NSCopying><NSObject><NSSecureCoding, _GCDriverClientHapticInterface, _GCLogicalDevice;

__attribute__((visibility("hidden")))
@interface _GCHapticLogicalDevice : NSObject
{
    id <_GCLogicalDevice> _logicalDevice;	// 8 = 0x8
    id <NSCopying><NSObject><NSSecureCoding> _identifier;	// 16 = 0x10
    NSMutableArray *_hapticClients;	// 24 = 0x18
    NSMutableArray *_hapticPlayers;	// 32 = 0x20
    float _prevSharpness[4];	// 40 = 0x28
    float _prevIntensity[4];	// 56 = 0x38
    id <_GCDriverClientHapticInterface> _driver;	// 72 = 0x48
    _GCHapticClientProxy *_clientConnection;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000ac315
- (void)stopAllHaptics;	// IMP=0x00000000000ac1fa
- (_Bool)hasClients;	// IMP=0x00000000000ac1dd
- (void)unregisterHapticClient:(id)arg1;	// IMP=0x00000000000ac1c7
- (void)registerHapticClient:(id)arg1;	// IMP=0x00000000000ac1b1
- (id)initWithIdentifier:(id)arg1 clientConnection:(id)arg2;	// IMP=0x00000000000abfe4

@end

