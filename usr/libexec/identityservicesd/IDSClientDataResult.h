//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IDSClientDataResult : NSObject
{
    NSDictionary *_clientDatasByServiceType;	// 8 = 0x8
    NSDictionary *_ktRegDataByServiceType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e72b7
@property(retain, nonatomic) NSDictionary *ktRegDataByServiceType; // @synthesize ktRegDataByServiceType=_ktRegDataByServiceType;
@property(retain, nonatomic) NSDictionary *clientDatasByServiceType; // @synthesize clientDatasByServiceType=_clientDatasByServiceType;

@end

