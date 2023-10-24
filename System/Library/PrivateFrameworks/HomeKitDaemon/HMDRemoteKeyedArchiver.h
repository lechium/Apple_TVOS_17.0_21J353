//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSKeyedArchiver, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;	// 8 = 0x8
    NSString *_transportType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003715e1
@property(retain, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
@property(readonly, copy) NSData *encodedData;
- (void)finishEncoding;	// IMP=0x000000000037150a
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000037147f
- (void)setClassName:(id)arg1 forClass:(Class)arg2;	// IMP=0x0000000000371408
- (void)dealloc;	// IMP=0x00000000003713aa
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(_Bool)arg1 remoteGateway:(_Bool)arg2 remoteUserIsAdministrator:(_Bool)arg3 user:(id)arg4 supportedFeatures:(id)arg5;	// IMP=0x000000000037138e
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(_Bool)arg1 remoteGateway:(_Bool)arg2 remoteUserIsAdministrator:(_Bool)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6;	// IMP=0x00000000003710cd

@end

