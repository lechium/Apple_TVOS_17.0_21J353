//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface _FTPasswordManagerCachedAuthTokenInfo : NSObject
{
    NSString *_profileID;	// 8 = 0x8
    NSString *_selfID;	// 16 = 0x10
    NSString *_token;	// 24 = 0x18
    NSDictionary *_alertInfo;	// 32 = 0x20
    NSNumber *_status;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002bc22
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *alertInfo; // @synthesize alertInfo=_alertInfo;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *selfID; // @synthesize selfID=_selfID;
@property(retain, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;

@end

