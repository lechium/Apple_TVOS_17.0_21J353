//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol CKXORCHelpers
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;
- (void)configureColumnsWithRootColumn:(void *)arg1;
- (NSString *)generateSchema;
@end

