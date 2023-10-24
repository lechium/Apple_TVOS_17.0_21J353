//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2GeneralInfo : PBCodable
{
    unsigned long long _ntpTime;	// 8 = 0x8
    unsigned int _abSwitches;	// 16 = 0x10
    NSString *_cname;	// 24 = 0x18
    unsigned int _screenRes;	// 32 = 0x20
    struct {
        unsigned int ntpTime:1;
        unsigned int abSwitches:1;
        unsigned int screenRes:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) unsigned int screenRes; // @synthesize screenRes=_screenRes;
@property(retain, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(nonatomic) unsigned long long ntpTime; // @synthesize ntpTime=_ntpTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019c217
- (unsigned long long)hash;	// IMP=0x000000000019c185
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019c09f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019bfcc
- (void)copyTo:(id)arg1;	// IMP=0x000000000019bf39
- (void)writeTo:(id)arg1;	// IMP=0x000000000019be91
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019be84
- (id)dictionaryRepresentation;	// IMP=0x000000000019ba3b
- (id)description;	// IMP=0x000000000019b9a1
@property(nonatomic) _Bool hasScreenRes;
@property(nonatomic) _Bool hasAbSwitches;
@property(nonatomic) unsigned int abSwitches; // @synthesize abSwitches=_abSwitches;
@property(readonly, nonatomic) _Bool hasCname;
@property(nonatomic) _Bool hasNtpTime;
- (void)dealloc;	// IMP=0x000000000019b830
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x00000000003739f0
@property(readonly, nonatomic) struct CGSize screenResolution;
@property(readonly, nonatomic) union tagNTP creationTime;
- (id)initWithCreationTime:(union tagNTP)arg1 screenResolution:(struct CGSize)arg2 abSwitches:(unsigned int)arg3;	// IMP=0x00000000003737fe

@end

