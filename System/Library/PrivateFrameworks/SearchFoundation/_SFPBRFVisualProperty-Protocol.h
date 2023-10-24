//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBRFVisualElement;

@protocol _SFPBRFVisualProperty <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool is_safe_for_logging;
@property(copy, nonatomic) NSArray *visual_elements;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFVisualElement *)visual_elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visual_elementsCount;
- (void)addVisual_elements:(_SFPBRFVisualElement *)arg1;
- (void)clearVisual_elements;
@end

