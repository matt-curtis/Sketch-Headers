//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableLayerGroup.h"

@class MSImmutableColor, MSImmutableColor<MSColor>, MSImmutableLayoutGrid, MSImmutableLayoutGrid<MSLayoutGrid>, MSImmutableRulerData, MSImmutableRulerData<MSRulerData>, MSImmutableSimpleGrid, MSImmutableSimpleGrid<MSSimpleGrid>;

@interface _MSImmutableArtboardGroup : MSImmutableLayerGroup
{
    BOOL _hasBackgroundColor;
    BOOL _includeBackgroundColorInExport;
    MSImmutableColor *_backgroundColor;
    MSImmutableSimpleGrid *_grid;
    MSImmutableRulerData *_horizontalRulerData;
    MSImmutableLayoutGrid *_layout;
    MSImmutableRulerData *_verticalRulerData;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableRulerData<MSRulerData> *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSImmutableLayoutGrid<MSLayoutGrid> *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSImmutableRulerData<MSRulerData> *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSImmutableSimpleGrid<MSSimpleGrid> *grid; // @synthesize grid=_grid;
@property(retain, nonatomic) MSImmutableColor<MSColor> *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL includeBackgroundColorInExport; // @synthesize includeBackgroundColorInExport=_includeBackgroundColorInExport;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void).cxx_destruct;
- (BOOL)attributesEqualAttributesForObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)verticalRulerDataGeneric;
- (id)layoutGeneric;
- (id)horizontalRulerDataGeneric;
- (id)gridGeneric;
- (id)backgroundColorGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

