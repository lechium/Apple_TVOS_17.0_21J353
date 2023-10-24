//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface OTDeviceInformation : NSObject
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_contextID;	// 16 = 0x10
    unsigned long long _epoch;	// 24 = 0x18
    NSString *_machineID;	// 32 = 0x20
    NSString *_modelID;	// 40 = 0x28
    NSString *_deviceName;	// 48 = 0x30
    NSString *_serialNumber;	// 56 = 0x38
    MISSING_TYPE *_osVersion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001afebd
@property(retain) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain) NSString *modelID; // @synthesize modelID=_modelID;
@property(retain) NSString *machineID; // @synthesize machineID=_machineID;
@property unsigned long long epoch; // @synthesize epoch=_epoch;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
- (id)initForContainerName:(id)arg1 contextID:(id)arg2 epoch:(unsigned long long)arg3 machineID:(id)arg4 modelID:(id)arg5 deviceName:(id)arg6 serialNumber:(id)arg7 osVersion:(id)arg8;	// IMP=0x00100000001afc48

@end

