//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface CBSpatialInteractionPeerInfoClient : NSObject
{
    unsigned int _peerID;	// 8 = 0x8
    unsigned int _uwbTokenFlags;	// 12 = 0xc
    NSData *_tokenData;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008f390
@property(nonatomic) unsigned int uwbTokenFlags; // @synthesize uwbTokenFlags=_uwbTokenFlags;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(nonatomic) unsigned int peerID; // @synthesize peerID=_peerID;

@end

