//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface RPCloudMessageContext : NSObject
{
    _Bool _nonWakingRequest;	// 8 = 0x8
    NSString *_appleID;	// 16 = 0x10
    NSString *_cloudServiceID;	// 24 = 0x18
    NSString *_fromID;	// 32 = 0x20
    NSString *_sendersKnownAlias;	// 40 = 0x28
    NSString *_toID;	// 48 = 0x30
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000000036d1
@property(nonatomic) _Bool nonWakingRequest; // @synthesize nonWakingRequest=_nonWakingRequest;
@property(retain, nonatomic) NSString *toID; // @synthesize toID=_toID;
@property(retain, nonatomic) NSString *sendersKnownAlias; // @synthesize sendersKnownAlias=_sendersKnownAlias;
@property(retain, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(retain, nonatomic) NSString *cloudServiceID; // @synthesize cloudServiceID=_cloudServiceID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;

@end

