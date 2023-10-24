//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, VCMediaNegotiatorStreamGroupU1Configuration;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorStreamGroupConfiguration : NSObject
{
    unsigned int _groupID;	// 8 = 0x8
    unsigned int _mediaType;	// 12 = 0xc
    unsigned int _mediaSubtype;	// 16 = 0x10
    unsigned int _syncGroupID;	// 20 = 0x14
    unsigned int _cipherSuite;	// 24 = 0x18
    VCMediaNegotiatorStreamGroupU1Configuration *_u1Config;	// 32 = 0x20
    NSMutableOrderedSet *_streamConfigs;	// 40 = 0x28
    NSMutableOrderedSet *_codecConfigs;	// 48 = 0x30
}

+ (id)streamGroupConfigWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4 cipherSuite:(unsigned int)arg5;	// IMP=0x001000000011ba91
@property(retain, nonatomic) VCMediaNegotiatorStreamGroupU1Configuration *u1Config; // @synthesize u1Config=_u1Config;
@property(nonatomic) unsigned int syncGroupID; // @synthesize syncGroupID=_syncGroupID;
@property(readonly, nonatomic) NSOrderedSet *codecConfigs; // @synthesize codecConfigs=_codecConfigs;
@property(readonly, nonatomic) NSOrderedSet *streamConfigs; // @synthesize streamConfigs=_streamConfigs;
@property(nonatomic) unsigned int mediaSubtype; // @synthesize mediaSubtype=_mediaSubtype;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int groupID; // @synthesize groupID=_groupID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011c09b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011be13
- (void)removeStreamConfigs:(struct _NSRange)arg1;	// IMP=0x000000000011bdfd
- (unsigned long long)indexOfCodecConfig:(id)arg1;	// IMP=0x000000000011bd68
- (void)addCodecConfig:(id)arg1;	// IMP=0x000000000011bc14
- (void)addStreamConfig:(id)arg1;	// IMP=0x000000000011bbd0
- (id)description;	// IMP=0x000000000011bb65
- (void)dealloc;	// IMP=0x000000000011baf1
- (id)initWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4 cipherSuite:(unsigned int)arg5;	// IMP=0x000000000011ba73
- (id)initWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4;	// IMP=0x000000000011ba32
- (id)init;	// IMP=0x000000000011b9b3

@end

