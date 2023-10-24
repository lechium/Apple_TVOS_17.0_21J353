//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WFAQIScale, WFParsedForecastData;

__attribute__((visibility("hidden")))
@interface WFWeatherStoreResponseDataWrapper : NSObject
{
    unsigned long long _requestType;	// 8 = 0x8
    WFParsedForecastData *_forecastData;	// 16 = 0x10
    WFAQIScale *_aqiScale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002bfba
@property(retain, nonatomic) WFAQIScale *aqiScale; // @synthesize aqiScale=_aqiScale;
@property(retain, nonatomic) WFParsedForecastData *forecastData; // @synthesize forecastData=_forecastData;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (id)initWithAQIScale:(id)arg1;	// IMP=0x000000000002beee
- (id)initWithForecastData:(id)arg1;	// IMP=0x000000000002be6f

@end

