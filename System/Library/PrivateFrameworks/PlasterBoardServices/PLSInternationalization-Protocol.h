//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlasterBoardServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol PLSInternationalization <NSObject>
- (void)setPreferredLanguages:(NSArray *)arg1 withVariants:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setDeviceRegion:(NSString *)arg1 changePrimaryLanguage:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end
