//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface _MPAbstractNetworkArtworkLoadingContext : NSObject
{
    NSURLSessionDataTask *_dataTask;	// 8 = 0x8
    NSMutableDictionary *_catalogIdentifierToCompletionHandlerMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010f0b4
@property(readonly, nonatomic) NSMutableDictionary *catalogIdentifierToCompletionHandlerMap; // @synthesize catalogIdentifierToCompletionHandlerMap=_catalogIdentifierToCompletionHandlerMap;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
- (id)init;	// IMP=0x000000000010f029

@end

