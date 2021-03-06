//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableStyleBorderOptions.h"

#import "MSStyleBorderOptions.h"

@class NSArray, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableStyleBorderOptions : _MSImmutableStyleBorderOptions <MSStyleBorderOptions>
{
}

@property(readonly, nonatomic) BOOL hasDashPattern;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *dashPattern;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isEnabled;
@property(readonly, nonatomic) unsigned long long lineCapStyle;
@property(readonly, nonatomic) unsigned long long lineJoinStyle;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;

@end

