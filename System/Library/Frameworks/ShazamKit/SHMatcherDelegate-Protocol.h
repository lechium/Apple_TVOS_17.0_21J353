//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/NSObject-Protocol.h>
#import <ShazamKit/SHSpectralOutputDelegate-Protocol.h>

@class SHMatcherResponse;
@protocol SHMatcher;

@protocol SHMatcherDelegate <NSObject, SHSpectralOutputDelegate>
- (void)matcher:(id <SHMatcher>)arg1 didProduceResponse:(SHMatcherResponse *)arg2;
@end

