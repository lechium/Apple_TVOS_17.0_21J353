//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol TIDPReportingDelegate <NSObject>
- (_Bool)record:(NSArray *)arg1;

@optional
- (_Bool)recordTokenFrequency:(NSDictionary *)arg1 withLocale:(NSString *)arg2 withTokenType:(NSString *)arg3;
- (_Bool)recordNumbersVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (_Bool)record:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
@end
