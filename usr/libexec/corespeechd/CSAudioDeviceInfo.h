//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordDeviceInfo, MISSING_TYPE, NSArray, NSString;

@interface CSAudioDeviceInfo : NSObject
{
    CSAudioRecordDeviceInfo *_recordDeviceInfo;	// 8 = 0x8
    NSString *_playbackRoute;	// 16 = 0x10
    MISSING_TYPE *_playbackDeviceTypeList;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000134674
- (void).cxx_destruct;	// IMP=0x0020000000134641
@property(readonly, copy, nonatomic) NSArray *playbackDeviceTypeList; // @synthesize playbackDeviceTypeList=_playbackDeviceTypeList;
@property(readonly, copy, nonatomic) NSString *playbackRoute; // @synthesize playbackRoute=_playbackRoute;
@property(readonly, copy, nonatomic) CSAudioRecordDeviceInfo *recordDeviceInfo; // @synthesize recordDeviceInfo=_recordDeviceInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000134527
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001344a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013449b
- (id)description;	// IMP=0x00100000001343dc
- (id)xpcObject;	// IMP=0x00100000001342e6
- (id)initWithXPCObject:(id)arg1;	// IMP=0x0010000000134182
- (id)initWithRecordDeviceInfo:(id)arg1 playbackRoute:(id)arg2 playbackDeviceTypeList:(id)arg3;	// IMP=0x0010000000134096

@end

