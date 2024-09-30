file(GLOB_RECURSE TS_FILES *.ts)

target_sources(${PROJECT_NAME} PRIVATE ${TS_FILES})

qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})