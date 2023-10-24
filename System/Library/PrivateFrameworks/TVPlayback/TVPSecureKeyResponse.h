//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, TVPSecureKeyRequest;

__attribute__((visibility("hidden")))
@interface TVPSecureKeyResponse : NSObject
{
    NSData *_keyData;	// 8 = 0x8
    NSDate *_renewalDate;	// 16 = 0x10
    TVPSecureKeyRequest *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000102365
@property(retain, nonatomic) TVPSecureKeyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;

@end

