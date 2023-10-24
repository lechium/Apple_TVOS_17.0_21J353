//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface DirectUploadResponse : NSObject
{
    NSString *_assetToken;	// 8 = 0x8
    NSString *_assetTokenType;	// 16 = 0x10
    long long _countOfBytesSent;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001a22a6
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property(readonly, copy, nonatomic) NSString *assetTokenType; // @synthesize assetTokenType=_assetTokenType;
@property(readonly, copy, nonatomic) NSString *assetToken; // @synthesize assetToken=_assetToken;
- (id)initWithURLResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000001a1d9a

@end

