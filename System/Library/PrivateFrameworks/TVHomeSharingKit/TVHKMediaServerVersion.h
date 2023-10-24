//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaServerVersion : NSObject
{
    unsigned int _sharingProtocolVersion;	// 8 = 0x8
    unsigned int _DAAPProtocolVersion;	// 12 = 0xc
    unsigned int _DPAPProtocolVersion;	// 16 = 0x10
    unsigned int _clientSharingProtocolVersion;	// 20 = 0x14
    NSString *_serverApplicationName;	// 24 = 0x18
    unsigned long long _serverApplicationVersion;	// 32 = 0x20
    unsigned long long _supportedExtensions;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0010000000098c1f
- (void).cxx_destruct;	// IMP=0x0000000000099928
@property(nonatomic) unsigned long long supportedExtensions; // @synthesize supportedExtensions=_supportedExtensions;
@property(nonatomic) unsigned int clientSharingProtocolVersion; // @synthesize clientSharingProtocolVersion=_clientSharingProtocolVersion;
@property(nonatomic) unsigned int DPAPProtocolVersion; // @synthesize DPAPProtocolVersion=_DPAPProtocolVersion;
@property(nonatomic) unsigned int DAAPProtocolVersion; // @synthesize DAAPProtocolVersion=_DAAPProtocolVersion;
@property(nonatomic) unsigned int sharingProtocolVersion; // @synthesize sharingProtocolVersion=_sharingProtocolVersion;
@property(nonatomic) unsigned long long serverApplicationVersion; // @synthesize serverApplicationVersion=_serverApplicationVersion;
@property(copy, nonatomic) NSString *serverApplicationName; // @synthesize serverApplicationName=_serverApplicationName;
- (_Bool)_isITunesSharingServer;	// IMP=0x0000000000099893
- (_Bool)_isDesktopSharingServer;	// IMP=0x000000000009986c
- (void)_updateClientSharingProtocolVersion;	// IMP=0x0000000000099832
- (_Bool)_supportsHomeVideos;	// IMP=0x0000000000099816
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000099790
- (id)description;	// IMP=0x00000000000995f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009911f
- (unsigned long long)hash;	// IMP=0x0000000000098fbd
- (_Bool)supportsSharingProtocolMajorVersion:(unsigned short)arg1 minorVersion:(unsigned short)arg2;	// IMP=0x0000000000098f62
- (_Bool)supportsSharingProtocolVersion:(unsigned int)arg1;	// IMP=0x0000000000098f4a
- (_Bool)supportsDPAPProtocolMajorVersion:(unsigned short)arg1 minorVersion:(unsigned short)arg2;	// IMP=0x0000000000098eef
- (_Bool)supportsDPAPProtocolVersion:(unsigned int)arg1;	// IMP=0x0000000000098ed7
- (_Bool)supportsDAAPProtocolMajorVersion:(unsigned short)arg1 minorVersion:(unsigned short)arg2;	// IMP=0x0000000000098e7c
- (_Bool)supportsDAAPProtocolVersion:(unsigned int)arg1;	// IMP=0x0000000000098e64
- (_Bool)supportsCapability:(unsigned long long)arg1;	// IMP=0x0000000000098de5
@property(readonly, nonatomic) unsigned short clientSharingProtocolMinorVersion;
@property(readonly, nonatomic) unsigned short clientSharingProtocolMajorVersion;
@property(readonly, nonatomic) unsigned short DPAPProtocolMinorVersion;
@property(readonly, nonatomic) unsigned short DPAPProtocolMajorVersion;
@property(readonly, nonatomic) unsigned short DAAPProtocolMinorVersion;
@property(readonly, nonatomic) unsigned short DAAPProtocolMajorVersion;
@property(readonly, nonatomic) unsigned short sharingProtocolMinorVersion;
@property(readonly, nonatomic) unsigned short sharingProtocolMajorVersion;
- (id)_init;	// IMP=0x0000000000098cf1
- (id)init;	// IMP=0x0000000000098c82

@end
